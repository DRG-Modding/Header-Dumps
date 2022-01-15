#ifndef UE4SS_SDK_BP_Promotion_Console_HPP
#define UE4SS_SDK_BP_Promotion_Console_HPP

class ABP_Promotion_Console_C : ABP_BaseSpaceRigConsole_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Audio;

    void OnOpenConsole(UBP_PlayerController_SpaceRig_C* InPlayerController);
    void ExecuteUbergraph_BP_Promotion_Console(int32 EntryPoint, UBP_PlayerController_SpaceRig_C* K2Node_Event_InPlayerController);
}

#endif
