This is a simple program created by me,Edison Ponari, that represents billing and elementary databases.
The functions I created are:
-Generator:This functions creates a 12x10(month x client) array used to store all the kWh for each client each month.The parameter act is used to control if the information generated will be printed or used later for another function.
-Bill:Used the formula given to us for billing acording to kWh a client used.
-Menu:I created Menu function to be the main page and redirect users that were undecided and wanted to see another aspect of the program.It contains a switch statement that makes the connection with the other functions.
-Cost:This functions uses Bill function and calculates the bill of each client and prints in the screen the information for each month for every client(kWh and lek amount) and also prints total for each month.
-Historgram:Also uses Bill function to calculate the bill for each client but now it doesn't print a table but rather a historgram with * using for statements.
-Searchc(extra):Using this program seemed like something totally random so I created some arrays with the months of the year and informations about 10 users(name,surname and profession.The idea of this function is that you can search with the ID of a client the month you want and also see how the bill changes after taxes(random fomula I came up with).
Saving was done seperatly for each functions because I wanted the structure of the file saved to be unique for each function that the user wanted to save.
(Parameters act in each functions like I mentioned before are just to connect every function with each other)
				 Main
				  |
                                  v
                                 Menu
                                  |
                                  v
                               Generator->Printf(info)->save?->End
                                  |
                          -----------------
 			  |       |       |
                          v       v       v
                      Histogram  Searchc Histogram
                          |       |       |
                          v       v       v
                        Bill     Bill    Bill
                          |       |       |
                          v       v       v
                       Printf   Printf   Printf
                          |       |       |
                          v       v       v
                       Save?     Save?   Save?
                          |       |       |
                          v       v       v
                         End     End   Another bill?
                                          |
                                          v
					 End                     