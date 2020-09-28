require "JSON"
# Load learned network from JSON file.
# @param [String] path file path
# @param [Array or Symbol] activation_function the name of the activation function you want to use as a symbol or an array
def load_network(path)
    # Open file.
    File.open(path,"r+") do |f|
      # Load hash from JSON file.
      hash = JSON.load(f)
  
      # Set columns from hash.
      columns = hash["columns"]
      
      neuron_columns = columns[1..-1]
   
      # Creates the geometry of the bias matrices
      biases_geometry = neuron_columns.map{ |col| [col,1] }
  
      # Create the geometry of the weight matrices  
      weights_geometry = neuron_columns.zip(columns[0..-2])
  
      # Load biases.
      biases_matrix = hash["biases"].to_a
      biases = []
      neuron_columns.size.times do |i|
        biases.push(biases_matrix[i].split(',').map!{ |item| item.delete("/[\-]/").gsub(" ","").to_f})
      end
      puts "biases : #{biases}"
  
      # Load weights.
      weights_matrix = hash["weights"].to_a
      weights = []
      neuron_columns.size.times do |i|
        weights_array = weights_matrix[i].split(',').map!{ |item| item.delete("/[\-]/").gsub(" ","").to_f}.to_a
        weights.push(weights_array.each_slice(weights_geometry[i][0]).to_a)
      end
      puts "weights : #{weights}"
      
      return { weights: weights, biases: biases }
    end
  end