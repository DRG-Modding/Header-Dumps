#ifndef UE4SS_SDK_BP_PatrolBot_Wheel_HPP
#define UE4SS_SDK_BP_PatrolBot_Wheel_HPP

class ABP_PatrolBot_Wheel_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    USphereComponent* Sphere;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PatrolBot_Wheel(int32 EntryPoint, float CallFunc_GetLifeSpan_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
}

#endif
