package com.example.root.democross;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import com.mycompany.helloworld.HelloWorld;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
    private HelloWorld mHelloDjinniInterface = HelloWorld.create();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(mHelloDjinniInterface.getHelloWorld());
    }



    public void changeText(View view){
        mHelloDjinniInterface.setName("test hello! ");
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(mHelloDjinniInterface.getHelloWorld());
    }
}
