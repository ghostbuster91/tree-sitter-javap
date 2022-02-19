interface IHello {

   default int getNumber() {
     return 4;
   }

   int getAbstractNumber();
}
