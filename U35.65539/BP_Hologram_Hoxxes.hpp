#ifndef UE4SS_SDK_BP_Hologram_Hoxxes_HPP
#define UE4SS_SDK_BP_Hologram_Hoxxes_HPP

class ABP_Hologram_Hoxxes_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    URotatingMovementComponent* RotatingMovement;
    UStaticMeshComponent* StaticMeshComponent1;
    UStaticMeshComponent* StaticMeshComponent0;
    USceneComponent* SharedRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Hologram_Hoxxes(int32 EntryPoint, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
