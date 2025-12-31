// Last updated: 3/6/2026, 2:08:31 PM
/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
      return "Hello World";  
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */