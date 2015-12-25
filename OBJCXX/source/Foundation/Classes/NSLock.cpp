/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2015 Jean-David Gadina - www.xs-labs.com / www.digidna.net
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/*!
 * @copyright   (c) 2015 - Jean-David Gadina - www.xs-labs.com / www.digidna.net
 * @brief       ...
 */

#include <OBJCXX/Foundation/Classes/NSLock.hpp>

namespace NS
{
    Lock::Lock( void ): Object( "NSLock" )
    {}
    
    void Lock::lock( void )
    {
        this->message< void >( "lock" ).Send();
    }
    
    void Lock::unlock( void )
    {
        this->message< void >( "unlock" ).Send();
    }
    
    bool Lock::lockBeforeDate( const Date & limit )
    {
        return this->message< bool >( "lockBeforeDate:" ).Send< id >( limit );
    }
    
    bool Lock::tryLock( void )
    {
        return this->message< bool >( "tryLock" ).Send();
    }
    
    String Lock::name( void )
    {
        return this->message< id >( "name" ).Send();
    }
    
    void Lock::setName( const String & name )
    {
        this->message< void >( "setName:" ).Send< id >( name );
    }
}
