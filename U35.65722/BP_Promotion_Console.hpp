#ifndef UE4SS_SDK_BP_Promotion_Console_HPP
#define UE4SS_SDK_BP_Promotion_Console_HPP

class ABP_Promotion_Console_C : public ABP_BaseSpaceRigConsole_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;

    void OnOpenConsole(class ABP_PlayerController_SpaceRig_C* InPlayerController);
    void ExecuteUbergraph_BP_Promotion_Console(int32 EntryPoint, class ABP_PlayerController_SpaceRig_C* K2Node_Event_InPlayerController);
};

#endif
