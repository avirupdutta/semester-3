import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code=MyAppletFacto.class width=1000 height=900></applet>*/
public class MyAppletFacto extends Applet implements ActionListener
{
Label L_number;//Label  number for factorial
Label L_result;//Label  result for factorial
TextField t_no;//Text Area for number
TextField t_facto;//Text Area for Displaying result
Button S_cal;//Button
int f,r=1,i;
public void init()
{
	 L_number=new Label("Number");
	 L_result=new Label("Result");
	 add(L_number);
	 t_no=new TextField(18);
     add(t_no);
	 add(L_result);
	 t_facto=new TextField(6);
	 add(t_facto);
	 S_cal=new Button("Factorial");
	 add(S_cal);
	 S_cal.addActionListener(this);
}
public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==S_cal)
{
	f=Integer.parseInt(t_no.getText());
	for(i=1;i<=f;i++)
	r*=i;
String cov=Integer.toString(r);
t_facto.setText(cov);
}
}
}
