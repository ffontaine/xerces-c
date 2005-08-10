#ifndef DOMImplementationList_HEADER_GUARD_
#define DOMImplementationList_HEADER_GUARD_

/*
 * Copyright 2001-2002,2004 The Apache Software Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id$
 */

#include <xercesc/util/XercesDefs.hpp>

XERCES_CPP_NAMESPACE_BEGIN


class DOMImplementation;


/**
 * The <code>DOMImplementationList</code> interface provides the abstraction of an ordered
 * collection of DOM implementations, without defining or constraining how this collection 
 * is implemented. The items in the <code>DOMImplementationList</code> are accessible via 
 * an integral index, starting from 0.
 */

class  CDOM_EXPORT DOMImplementationList {
protected:
    // -----------------------------------------------------------------------
    //  Hidden constructors
    // -----------------------------------------------------------------------
    /** @name Hidden constructors */
    //@{    
    DOMImplementationList() {};
    //@}

private:
    // -----------------------------------------------------------------------
    // Unimplemented constructors and operators
    // -----------------------------------------------------------------------
    /** @name Unimplemented constructors and operators */
    //@{
    DOMImplementationList(const DOMImplementationList &);
    DOMImplementationList & operator = (const DOMImplementationList &);
    //@}

public:
    // -----------------------------------------------------------------------
    //  All constructors are hidden, just the destructor is available
    // -----------------------------------------------------------------------
    /** @name Destructor */
    //@{
    /**
     * Destructor
     *
     */
    virtual ~DOMImplementationList()  {};
    //@}

    // -----------------------------------------------------------------------
    //  Virtual DOMImplementationList interface
    // -----------------------------------------------------------------------
    /** @name Functions introduced in DOM Level 3 */
    //@{
    // -----------------------------------------------------------------------
    //  Getter methods
    // -----------------------------------------------------------------------
    /**
     * Returns the <code>index</code> item in the collection.
     *
     * If <code>index</code> is greater than or equal to the number of DOMImplementation in
     * the list, this returns <code>null</code>.
     *
     * @param index Index into the collection.
     * @return The DOMImplementation at the <code>index</code>th position in the
     *   <code>DOMImplementationList</code>, or <code>null</code> if that is not a valid
     *   index.
     * @since DOM Level 3
     */
    virtual DOMImplementation *item(XMLSize_t index) const = 0;

    /**
     * Returns the number of DOMImplementation in the list.
     *
     * The range of valid child node indices is 0 to <code>length-1</code> inclusive.
     * @since DOM Level 3
     */
    virtual XMLSize_t getLength() const = 0;
    //@}

    // -----------------------------------------------------------------------
    //  Non-standard Extension
    // -----------------------------------------------------------------------
    /** @name Non-standard Extension */
    //@{
    /**
     * Called to indicate that this list is no longer in use
     * and that the implementation may relinquish any resources associated with it and
     * its associated children.
     *
     * Access to a released object will lead to unexpected result.
     *
     */
    virtual void release() = 0;
    //@}     

};

XERCES_CPP_NAMESPACE_END

#endif

