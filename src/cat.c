/* Copyright (c) 2025, Vladislav Prokopenko <vladislavprokopenko@disroot.org>                                                                                                     
                                                                                                                                                                               
Redistribution and use in source and binary forms, with or without                                                                                                             
modification, are permitted provided that the following conditions are met:                                                                                                    
                                                                                                                                                                               
1. Redistributions of source code must retain the above copyright notice, this                                                                                                 
   list of conditions and the following disclaimer.                                                                                                                            
                                                                                                                                                                               
2. Redistributions in binary form must reproduce the above copyright notice,                                                                                                   
   this list of conditions and the following disclaimer in the documentation                                                                                                   
   and/or other materials provided with the distribution.                                                                                                                      
                                                                                                                                                                               
3. Neither the name of the copyright holder nor the names of its                                                                                                               
   contributors may be used to endorse or promote products derived from                                                                                                     
   this software without specific prior written permission.                                                                                                                 
                                                                                                                                                                            
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE  
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE            
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE            
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL                   
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR                 
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER               
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,            
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE            
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */

#include <stdio.h>

int main(int argc, char** argv) {
   /* returns -1 if the number of arguments is not sufficient */
   if (argc < 2) {
       return -1;
   }
   
   /* make a pointer for the file in the argument */
   FILE *fptr;
   fptr = fopen(argv[1], "r");
   
   /* create a buffer with the file's contents, read it and output with printf */
   char buffer[5];
   while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
       printf("%s", buffer);
      }
   fclose(fptr);
   return 0; 
}
