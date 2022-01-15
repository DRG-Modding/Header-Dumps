#ifndef UE4SS_SDK_BP_Grenade_Incendiary_Flame_HPP
#define UE4SS_SDK_BP_Grenade_Incendiary_Flame_HPP

class ABP_Grenade_Incendiary_Flame_C : AStickyFlame
{
    FPointerToUberGraphFrame UberGraphFrame;
    UObjectTemperatureComponent* ObjectTemperature;
    UPathfinderCollisionComponent* PathfinderCollision;
    USphereComponent* Sphere;
    UPointLightComponent* PointLight;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Grenade_Incendiary_Flame(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
