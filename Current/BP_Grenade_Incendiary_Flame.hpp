#ifndef UE4SS_SDK_BP_Grenade_Incendiary_Flame_HPP
#define UE4SS_SDK_BP_Grenade_Incendiary_Flame_HPP

class ABP_Grenade_Incendiary_Flame_C : public AStickyFlame
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UObjectTemperatureComponent* ObjectTemperature;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Grenade_Incendiary_Flame(int32 EntryPoint);
};

#endif
