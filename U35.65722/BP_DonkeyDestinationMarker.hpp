#ifndef UE4SS_SDK_BP_DonkeyDestinationMarker_HPP
#define UE4SS_SDK_BP_DonkeyDestinationMarker_HPP

class ABP_DonkeyDestinationMarker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Donkey_DestinationMarker;
    class UStaticMeshComponent* SM_Light02;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Cube;
    class USceneComponent* DefaultSceneRoot;

    void ActivateAtPosition(FVector Loc);
    void HideMarker();
    void ExecuteUbergraph_BP_DonkeyDestinationMarker(int32 EntryPoint, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector K2Node_CustomEvent_Loc, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1);
};

#endif
