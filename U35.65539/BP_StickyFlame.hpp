#ifndef UE4SS_SDK_BP_StickyFlame_HPP
#define UE4SS_SDK_BP_StickyFlame_HPP

class ABP_StickyFlame_C : AStickyFlame
{
    FPointerToUberGraphFrame UberGraphFrame;
    UObjectTemperatureComponent* ObjectTemperature;
    UPathfinderCollisionComponent* PathfinderCollision;
    USphereComponent* Sphere;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StickyFlame(int32 EntryPoint);
}

#endif
