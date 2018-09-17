// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from helloworld.djinni

package com.mycompany.helloworld;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class HelloWorld {
    public abstract String getHelloWorld();

    public abstract String getName();

    public abstract void setName(String name);

    public static HelloWorld create()
    {
        return CppProxy.create();
    }

    private static final class CppProxy extends HelloWorld
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void _djinni_private_destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws Throwable
        {
            _djinni_private_destroy();
            super.finalize();
        }

        @Override
        public String getHelloWorld()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getHelloWorld(this.nativeRef);
        }
        private native String native_getHelloWorld(long _nativeRef);

        @Override
        public String getName()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getName(this.nativeRef);
        }
        private native String native_getName(long _nativeRef);

        @Override
        public void setName(String name)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setName(this.nativeRef, name);
        }
        private native void native_setName(long _nativeRef, String name);

        public static native HelloWorld create();
    }
}