library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity v95v95v58v840v95e is
   port (
      clk: in std_logic;
      rst: in std_logic;
      q: out std_logic_vector(3 downto 0)
   );
end v95v95v58v840v95e;

architecture v95v95v58v840v95a of v95v95v58v840v95e is

   signal v580: std_logic_vector(3 downto 0);
begin
   q <= v580;

   process (clk)
   begin
      if (rising_edge(clk)) then
            if ((rst = '1')) then
               v580 <= "0000";
            else
               v580 <= std_logic_vector(unsigned(v580)+unsigned("0001"));
            end if;
      end if;
   end process;

end v95v95v58v840v95a;

