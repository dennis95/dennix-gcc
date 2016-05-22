------------------------------------------------------------------------------
--                                                                          --
--                         GNAT COMPILER COMPONENTS                         --
--                                                                          --
--               S Y S T E M . M U L T I P R O C E S S O R S                --
--                                                                          --
--                                  B o d y                                 --
--                                                                          --
--         Copyright (C) 2010-2015, Free Software Foundation, Inc.          --
--                                                                          --
-- GNAT is free software;  you can  redistribute it  and/or modify it under --
-- terms of the  GNU General Public License as published  by the Free Soft- --
-- ware  Foundation;  either version 3,  or (at your option) any later ver- --
-- sion.  GNAT is distributed in the hope that it will be useful, but WITH- --
-- OUT ANY WARRANTY;  without even the  implied warranty of MERCHANTABILITY --
-- or FITNESS FOR A PARTICULAR PURPOSE.                                     --
--                                                                          --
-- As a special exception under Section 7 of GPL version 3, you are granted --
-- additional permissions described in the GCC Runtime Library Exception,   --
-- version 3.1, as published by the Free Software Foundation.               --
--                                                                          --
-- You should have received a copy of the GNU General Public License and    --
-- a copy of the GCC Runtime Library Exception along with this program;     --
-- see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see    --
-- <http://www.gnu.org/licenses/>.                                          --
--                                                                          --
------------------------------------------------------------------------------

with Interfaces.C; use Interfaces.C;

package body System.Multiprocessors is

   --------------------
   -- Number_Of_CPUs --
   --------------------

   function Number_Of_CPUs return CPU is
   begin
      if CPU'Last = 1 then
         return 1;
      else
         declare
            function Gnat_Number_Of_CPUs return int;
            pragma Import (C, Gnat_Number_Of_CPUs, "__gnat_number_of_cpus");
         begin
            return CPU (Gnat_Number_Of_CPUs);
         end;
      end if;
   end Number_Of_CPUs;

end System.Multiprocessors;
