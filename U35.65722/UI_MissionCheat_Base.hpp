#ifndef UE4SS_SDK_UI_MissionCheat_Base_HPP
#define UE4SS_SDK_UI_MissionCheat_Base_HPP

class UUI_MissionCheat_Base_C : public UUserWidget
{

    void TeleportTo(float desiredDistance, class AActor*& Taget, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_FindCharacterTeleportLocation_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
    class UCheatMenu_BasicButtonWText_C* CreateButton(FString Base Text, FString Item Text, class UPanelWidget*& Panel, const TArray<class UCheatMenu_BasicButtonWText_C*>& TargetArrayFString CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, class UCheatMenu_BasicButtonWText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

#endif
