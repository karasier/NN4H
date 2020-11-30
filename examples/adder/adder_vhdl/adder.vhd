library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity v95v95v58v840v95e is
   port (
      a: in std_logic_vector(3 downto 0);
      b: in std_logic_vector(3 downto 0);
      s: out std_logic_vector(3 downto 0);
      carry: out std_logic
   );
end v95v95v58v840v95e;

architecture v95v95v58v840v95a of v95v95v58v840v95e is

begin
   v581: process (a, b)
      variable v37v964: std_logic_vector(3 downto 0);
      variable v37v9610: std_logic_vector(3 downto 0);
      variable v37v9614: std_logic;
   begin
      v37v964 := "0000";
      v37v964 := std_logic_vector(unsigned(a)+unsigned(b));
      v37v9610 := v37v964((3) downto (0));
      v37v9614 := v37v964(4);
      s <= v37v9610;
      carry <= v37v9614;
   end process;

end v95v95v58v840v95a;

