
package com.MIEngineDemo;

import android.app.Activity;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.os.Bundle;

public class MIEngineDemo extends Activity
{
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        LinearLayout layout = new LinearLayout(this);

        Button button = new Button(this);
        button.setText("Breakpoint");
        button.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                breakpoint();
            }
        });
        layout.addView(button);

        button = new Button(this);
        button.setText("Stepping");
        button.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                stepping();
            }
        });
        layout.addView(button);

        button = new Button(this);
        button.setText("Expression Evaluation");
        button.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                expressionEvaluation();
            }
        });
        layout.addView(button);

        button = new Button(this);
        button.setText("Exception");
        button.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                exception();
            }
        });
        layout.addView(button);

        setContentView(layout);
    }

    public native void breakpoint();

    public native void stepping();

    public native void expressionEvaluation();

    public native void exception();


    static {
        System.loadLibrary("MIEngineDemoLib");
    }
}
