#ifndef UE4SS_SDK_BP_StickyFlame_HPP
#define UE4SS_SDK_BP_StickyFlame_HPP

class ABP_StickyFlame_C : public AStickyFlame
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UObjectTemperatureComponent* ObjectTemperature;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USphereComponent* Sphere;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StickyFlame(int32 EntryPoint);
};

#endif
