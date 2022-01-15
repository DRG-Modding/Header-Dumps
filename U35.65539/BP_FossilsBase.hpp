#ifndef UE4SS_SDK_BP_FossilsBase_HPP
#define UE4SS_SDK_BP_FossilsBase_HPP

class ABP_FossilsBase_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;
    USoundBase* SpookyAudio;
    float AudioActivationDistance;
    FRandRange RandomScale;

    void UserConstructionScript(float CallFunc_GetFloatValue_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void ReceiveBeginPlay();
    void OnLocalPlayerClose(UPlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_FossilsBase(int32 EntryPoint, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger);
}

#endif
