#ifndef UE4SS_SDK_BP_MouthPlant_HPP
#define UE4SS_SDK_BP_MouthPlant_HPP

class ABP_MouthPlant_C : public ABP_AnimatedFoliage_Base_C
{
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    class USphereComponent* SphereCollision;

    void UserConstructionScript();
};

#endif
