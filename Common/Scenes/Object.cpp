// ================================================================================ //
// The authors of this code (Francisco �vila, Sergio Murgu�a, Leo Reyes and Arturo	//
// Garc�a) hereby release it into the public domain. This applies worldwide.		//
//																					//
// In case this is not legally possible, we grant any entity the right to use this	//
// work for any purpose, without any conditions, unless such conditions are			//
// required by law.																	//
//																					//
// This work is provided on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF	//
// ANY KIND. You are solely responsible for the consequences of using or			//
// redistributing this code and assume any risks associated with these or related	//
// activities.																		//
// ================================================================================ //

#include "Object.h"
//------------------------------------------------
// Constructor
//------------------------------------------------
Object::Object(Model* a_Model, Point &a_Position)
{
	M4_Translation(m_World,a_Position.x,a_Position.y,a_Position.z);
	m_Model = a_Model;
	m_bIsDynamic = false;
}

//------------------------------------------------
// Destructor
//------------------------------------------------
Object::~Object()
{
	SAFE_DELETE( m_Model );
}
