#ifndef UE4SS_SDK_BP_WormholeLocation_OutsideBase_HPP
#define UE4SS_SDK_BP_WormholeLocation_OutsideBase_HPP

class ABP_WormholeLocation_OutsideBase_C : ABP_WormholeLocation_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnPlayerEnterLocation(UPlayerCharacter* Character);
    void OnPlayerLeaveLocation(UPlayerCharacter* Character);
    void ExecuteUbergraph_BP_WormholeLocation_OutsideBase(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, bool CallFunc_IsLocallyControlled_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_character, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
