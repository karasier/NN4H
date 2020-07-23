class Integer
    def method_missing(method_name)
      if method_name =~ /^b([01]+)$/
        bin_body = $1.gsub(/^b/, "").gsub(/0*$/, "")
        n = 1
        frac = 0
        bin_body.split("").each do |b|
          frac += Rational(1, 2**n) if b == "1"
          n +=1
        end
        return self + (self > 0 ? frac : - frac)
        
      else
        raise NoMethodError.new("undefined method `#{method_name}' for \"#{self}\":#{self.class} (NoMethodError)")
      end
    end
  end
  
  module QFormat
    def q(q1, q2, show_dot = false)
      int_part = (q1 >= 1 ? sprintf("%0#{q1}b", self.abs.to_i) : "")
      neg_f = self.negative?
      
      frac = (self - self.to_i).abs
      frac_s = ""
      (1..q2).each do |n|
        r = Rational(1, 2**n)
        if(frac >= r)
          frac_s += "1"
          frac    = frac - r
        else
          frac_s += "0"
        end
      end
      all_bit = (int_part + (show_dot && (! neg_f) ? "." : "") + frac_s)
      if neg_f
        all_bit.match(/^(.*?)(10*)$/)
        all_bit = ($1.nil? ? "" : $1.tr("01","10")) + 
                  ($2.nil? ? "" : $2)
        all_bit = all_bit[0..q1-1] + "." + all_bit[q1..-1] if show_dot
      end
      all_bit
    end
  end
  
  
  class Float
    include QFormat
  end
  
  class Integer
    include QFormat
  end
  
  class Rational
    include QFormat
  end  
  