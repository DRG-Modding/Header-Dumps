#ifndef UE4SS_SDK_WND_ForgeAvailableMessage_HPP
#define UE4SS_SDK_WND_ForgeAvailableMessage_HPP

class UWND_ForgeAvailableMessage_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnShown();
    void ExecuteUbergraph_WND_ForgeAvailableMessage(int32 EntryPoint, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_MissionShoutLocally_ReturnValue);
}

#endif
