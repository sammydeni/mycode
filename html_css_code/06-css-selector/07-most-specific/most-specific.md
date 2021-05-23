# Most Specific

* ul li {} --> 0-0-2 there are only two element selectors

* ul > li {} --> 0-0-2 there are only two element selectors

* body > #main.mobile a:hover {} --> 1-2-2 there are two element selectors, two class selectors and one id selector

* div p > span {} --> 0-0-3 only three element selectors

* .users .name {} --> 0-2-0 there are only two class selectors

* [href$='.pdf'] {} --> 0-1-0 there is one attribute selector

* :hover {} --> 0-1-0 there is one pseudo-class selector

* div .name {} --> 0-1-1 one element selector and one class selector

* a[href$='.pdf'] {} --> 0-1-1 there is one element selector and one attribute selector 

* .pictures img:hover {} --> 0-2-1 there is one element selector and two class selectors (one of this it's a pseudo-class) 

* .name.name.name {} --> 0-3-0 three class selectors

* .user #name {} --> 1-1-0 there is one class selector and one id selector

* #name span {} --> 1-0-1 there is one element selector and one id selector

* nav#nav > li:hover {} --> 1-1-2 there are two element selectors, one class selector (pseudo-class), and one id selector

* li:nth-child(2n+1):hover {} --> 0-2-1 there is one element selector and two class selector (both pseudo-class)
