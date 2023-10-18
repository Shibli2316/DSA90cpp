// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class Hello {
    public static void main(String[] args) {
        String str = "hello world";
        String possibles = "qwertyuiopasdfghjklzxcvbn m";
        StringBuilder make = new StringBuilder();
        for(int index = 0; index < str.length(); index++){
            make.append(" ");
        }

        int i = 0;
        while(i < str.length()) {
            while (make.charAt(i) != str.charAt(i)) {
                int index = (int) Math.floor(Math.random() * possibles.length());
                String ch = possibles.charAt(index) + "";
                make.replace(i, i + 1, ch);
                System.out.println(make);

                try {
                    Thread.sleep(50);
                } catch (InterruptedException e) {
                    Thread.currentThread().interrupt();
                }
            }
            i++;
        }
    }
}