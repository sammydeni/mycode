# Game Solutions

#### Level 1
- plate /element /select all elements named plate
#### Level 2
- bento /element /select all elements named bento
#### Level 3
- fancy /id selector /select all elements with an id="fancy"
#### Level 4
 - plate apple /descendant selector /select an element inside another element.In the example, the apple inside the plate
#### Level 5
- #fancy pickle /combine the descendant e Id selectors /select an element that is inside another element with an id="fancy"
#### Level 6
- .small /Class selector /select elements by their class="small"
#### Level 7
- orange.small /combine the class selector /select all elements named orange that have the class named small 
#### Level 8
- bento orange.small /combine the class selector & Id selectors /select all elements named orange with class named small that are inside the element named bento
#### Level 9
- plate, bento/combine id selector /select all elements named plate and bento
#### Level 10
- * /the Universal Selector /select all elements
#### Level 11
- plate * /combine the universal selector & Id selectors /select all elements inside of elements named plate
#### Level 12
- plate + apple /adjacent sibling selector /select all elements named apple if they are adjacent to the plate name element
#### Level 13
- bento ~ pickle /general sibling selector /select all the elements named pickle that follow the element named bento
#### Level 14
- plate > apple /child selector /select the element named apple that is direct child of the element named plate
#### Level 15
- orange:first-child /first child pseudo-selector /select the element named orange which is the first child of the element named plate
#### Level 16
- apple:only-child, plate pickle:only-child /only child pseudo-selector /select the element named apple and named pickle which are the only ones inside the element named plate
#### Level 17
- apple:last-child, pickle:last-child /last child pseudo-selector 
- solution 2. apple, pickle /there is only one element, that element counts as the last-child /select the last child element named Pickle and the last element named apple with small class
#### Level 18
- plate:nth-child(3) /nth child pseudo-selector /select the third element named plate
#### Level 19
- bento:nth-last-child(3) /nth last child selector /select the first 
element named bento but counting from the back
#### Level 20
- apple:first-of-type /first of type selector /select the first element of apple type
#### Level 21
- plate:nth-of-type(even) /nth of type selector /select even elements named plate
#### Level 22
- plate:nth-of-type(2n+3) /nth-of-type selector with formula /select each two elements named plate starting from the third element named plate
#### Level 23
- apple:only-of-type /only of type selector /select the element named apple which is the only one of its type inside the element named platetype selector 
#### Level 24
- orange:last-of-type, apple:last-of-type /last of type selector /select the last orange and apple elements
#### Level 25
- bento:empty /empty selector /select the bento name element that are empty
#### Level 26
- apple:not(.small) /negation pseudo-class /select elements named apple that are not with the small class
#### Level 27
- [for]/attribute selector /select all elements with "for" attribute
#### Level 28
- plate[for] /combine attribute selector & Id selectors /select all elements named plate with attribute "for"
#### Level 29
- [for=Vitaly] /attribute value selector /select all elements with "for" attribute and "Vitaly" value
#### Level 30
- [for^="Sa"] /attribute starts with selector /select all elements with "for" attribute and value starts "Sa"
#### Level 31
- [for$="ato"] /attribute ends with selector /select all elements with "for" attribute and value ends "ato"
#### Level 32 
- [for*="obb"] /attribute wildcard selector /select all elements with "for" attribute and value contains  "obb"