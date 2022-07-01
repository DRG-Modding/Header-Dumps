#ifndef UE4SS_SDK_BP_WormholeLocation_OutsideBase_HPP
#define UE4SS_SDK_BP_WormholeLocation_OutsideBase_HPP

class ABP_WormholeLocation_OutsideBase_C : public ABP_WormholeLocation_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnPlayerEnterLocation(class APlayerCharacter* Character);
    void OnPlayerLeaveLocation(class APlayerCharacter* Character);
    void ExecuteUbergraph_BP_WormholeLocation_OutsideBase(int32 EntryPoint);
};

#endif
