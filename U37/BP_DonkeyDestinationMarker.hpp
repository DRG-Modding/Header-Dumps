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
    void ExecuteUbergraph_BP_DonkeyDestinationMarker(int32 EntryPoint);
};

#endif
