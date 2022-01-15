#ifndef UE4SS_SDK_BP_WormholeLocation_Base_HPP
#define UE4SS_SDK_BP_WormholeLocation_Base_HPP

class ABP_WormholeLocation_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;

    void OnPlayerEnterLocation(UPlayerCharacter* Character);
    void OnPlayerLeaveLocation(UPlayerCharacter* Character);
    void ExecuteUbergraph_BP_WormholeLocation_Base(int32 EntryPoint, UPlayerCharacter* K2Node_CustomEvent_character, UPlayerCharacter* K2Node_CustomEvent_character_1);
}

#endif
