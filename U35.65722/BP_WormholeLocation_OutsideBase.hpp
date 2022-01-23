#ifndef UE4SS_SDK_BP_WormholeLocation_OutsideBase_HPP
#define UE4SS_SDK_BP_WormholeLocation_OutsideBase_HPP

class ABP_WormholeLocation_OutsideBase_C : public ABP_WormholeLocation_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnPlayerEnterLocation(class APlayerCharacter* Character);
    void OnPlayerLeaveLocation(class APlayerCharacter* Character);
    void ExecuteUbergraph_BP_WormholeLocation_OutsideBase(int32 EntryPoint, class APlayerCharacter* K2Node_Event_character, bool CallFunc_IsLocallyControlled_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_character, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
