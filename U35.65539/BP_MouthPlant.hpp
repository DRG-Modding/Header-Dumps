#ifndef UE4SS_SDK_BP_MouthPlant_HPP
#define UE4SS_SDK_BP_MouthPlant_HPP

class ABP_MouthPlant_C : ABP_AnimatedFoliage_Base_C
{
    USphereComponent* Sphere;
    UInstantUsable* InstantUsable;
    USphereComponent* SphereCollision;

    void UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue);
}

#endif
