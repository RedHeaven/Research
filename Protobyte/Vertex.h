/* 
 * File:   Vertex.h
 * Author: 33993405
 *
 * Created on February 27, 2013, 5:54 PM
 */

#ifndef VERTEX_H
#define	VERTEX_H

#include "Vector3.h"
#include "Color4.h"
#include "Tuple2.h"

class Vertex {
    
public:
    friend std::ostream& operator<<(std::ostream& output, const Vertex& vertex);
    
    Vertex();
    Vertex(const Vector3& pos);
    Vertex(const Vector3& pos, const Color4<float>& col4);
    
    Vector3 pos;
    
    const Vector3& getNormal() const;
    Color4<float> getColor() const;
    
    void setNormal(const  Vector3& norm);
    void setColor(const Color4<float>& col4);
    
private:
    Tuple2<float> uv;
    Vector3 norm;
    Color4<float> col4;
    
    void init();
    
    
};

#endif	/* VERTEX_H */

