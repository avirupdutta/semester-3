import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code=MyApplet.class width=200 height=200></applet>*/
public class MyApplet extends Applet implements ActionListener
{
Label L_name;
Label L_marks1;
Label L_marks2;
Label L_sum;
TextField t;
TextField m1;
TextField m2;
TextField s;
Button S_bt;
public void init()
{
	 L_name=new Label("Name");
	 L_marks1=new Label("MARKS_1");
	 L_marks2=new Label("MARKS_2");
	add(L_name);
	 t=new TextField(15);
	add(t);
	 m1=new TextField(6);
	add(L_marks1);
	add(m1);
	 m2=new TextField(6);
	add(L_marks2);
	add(m2);
	 L_sum=new Label("Total");
	add(L_sum);
	 s=new TextField(6);
	add(s);
	S_bt=new Button("SUM");
	add(S_bt);
	S_bt.addActionListener(this);
}
public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==S_bt)
{
	int a=Integer.parseInt(m1.getText());
	int b=Integer.parseInt(m2.getText());
	int c=a+b;
String sm=Integer.toString(c);
	s.setText(sm);

}

}

}



