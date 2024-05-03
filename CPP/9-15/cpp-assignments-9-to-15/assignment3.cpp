// Have some variable names written in the commentary
// All you have to do is write Valid if the name of the variable is valid besides the name of the variable and Not Valid if it is invalid
// If the variable is valid, write Good Practice if the name of the variable follows Best Practices and Bad Practice if it does not follow best practices
// You have an example at the beginning of the comment to clarify the idea

/*
    name        [ Valid | Good Practice ]
    NAME        [ Valid | Bad Practice ]
    1name       [ ??? ] => Reason ?
    __name      [ ??? ] => Reason ?
    name@name   [ ??? ] => Reason ?
    name10name  [ ??? ] => Reason ?
    name!name   [ ??? ] => Reason ?
    first_NAME  [ ??? ] => Reason ?
    first_name  [ ??? ] => Reason ?
    firstName   [ ??? ] => Reason ?
    first name  [ ??? ] => Reason ?
    fn          [ ??? ] => Reason ?
    public      [ ??? ] => Reason ?
    Public      [ ??? ] => Reason ?
*/
// ==============================================================================================

/*
    name        [ Valid | Good Practice ]
    NAME        [ Valid | Bad Practice ]
    1name       [ Not Valid ] => start with number 
    __name      [ Valid | Bad Practice ]
    name@name   [ Not Valid ] => special character 
    name10name  [ Valid | Bad Practice ]
    name!name   [ Not   | Valid special character
    first_NAME  [ Valid | Good Practice ]
    first_name  [ Valid | Good Practice ]
    firstName   [ Valid | Good Practice ]
    first name  [ Not Valid ] => space ?
    fn          [ Valid | Bad Practice ]
    public      [ Not Valid ] => reserve by system 
    Public      [ Valid | Good Practice ]
*/