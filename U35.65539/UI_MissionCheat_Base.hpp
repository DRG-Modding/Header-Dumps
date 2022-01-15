#ifndef UE4SS_SDK_UI_MissionCheat_Base_HPP
#define UE4SS_SDK_UI_MissionCheat_Base_HPP

class UUI_MissionCheat_Base_C : UUserWidget
{

    void TeleportTo(float desiredDistance, AActor*& Taget, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_FindCharacterTeleportLocation_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
    UCheatMenu_BasicButtonWText_C* CreateButton(FString Base Text, FString Item Text, UPanelWidget*& Panel, const TArray<UCheatMenu_BasicButtonWText_C*>& TargetArrayFString CallFunc_Concat_StrStr_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, UCheatMenu_BasicButtonWText_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
}

#endif
