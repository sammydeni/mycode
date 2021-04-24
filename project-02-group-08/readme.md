# Author details
 *Gianluca Formica, Yasser Ennasri, Samuele Denicola, Stefano Vetrò*

# Exercise requirements
  **Project expiry list**
  - **Aim**

    Create a javascript program, which allows you to enter a list of supermarket products filtered by expiration in your place. 

    <br>

  - **Requirements**
    
    Classify products for expired, new, old and valid. To be classified in this way, the expired items must be removed (*expired*), 
    after a few weeks the products will be removed (*old*), every week there will be new products (*new*), after checking them the 
    products become valid (*valid*) .

    <br>

      * *Rules*
      
        - N - are products that have been around for more than a few weeks, so they need to be removed

        - M - are the new products every week.

        - K - day of departure of the program.

        - X - the period of performance in weeks.

        - R - are the duration in seconds of printing the weekly list.
  
        The program should start from the current date plus K days and run for X weeks.

      <br>


      * *Item structure*

         The table must consist of:
        - an ID;

        - a name;

        - an expiration date;

        - and other properties that are necessary;

     <br>


      * *Guidelines*
    
        - Uniqueness of the ID.

        - Filling of the number with zero in the ID (e.g. 01 or 001).

        - Randomness of the name taken from a given set.

        - The expiry dates should be between the start and finish date of the weekly runs.

        - Filling of names and states to have the same length.

        - The font filling must be configurable.

        - The formatting must be as in the example 03-JUN-2021.
  
        - The print on the console must always be correctly aligned.


     <br>


      * *Bonus*
  
        - Bonus 1: create a random number MIN MAX of duration R, which can be configurable in the config object.

        - Bonus 2: use colors in the console.log output.

        - Bonus 3: create a date format in the user defined object and allow you to format dates. Not using moment.js.

     <br>


# Approach to solution

We read and studied the pdf that was provided to us and subsequently consulted sites such as w3school and MDN.
With the various problems that arose we also looked at the lessons.

The first thing we did was put some ideas into code and the variables have been initialized, that is: k, m, x, n, r.

We developed this program by putting the focus on one parameter at a time, making sure that each step is displayed correctly in the console.

The code was written first in single JS file and was subsequently subdivided into several libraries through the use of IIFE.

The four library are:
   
   - librarydating.js : Contains the functions to set start and end dates and the range for generating the expiry date.

   - libraryfunction.js : Contains all functions that we used to modify date, string ecc.

   - libraryitem.js : Contains functions to create all items.

   - libraryprinter.js : Contains functions to print items in the correct way.


Later we dealt with the bonuses by consulting several websites. The third bonus has not been developed.

All the code has been properly commented.

 <br>

## References:

- [Stackoverflow](www.stackoverflow.com)

- [W3schools](www.w3schools.com)

- [MDN](developer.mozilla.org)

<br>

## Files
* [Index](index.html)
* [Main](script/main.js)
* [LibraryDating](script/librarydating.js) 
* [LibraryFunction](script/libraryfunction.js) 
* [LibraryItem](script/libraryitem.js) 
* [LibraryPrinter](script/libraryprinter.js) 






