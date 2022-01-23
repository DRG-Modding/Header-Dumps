#ifndef UE4SS_SDK_HUD_XP_HPP
#define UE4SS_SDK_HUD_XP_HPP

class UHUD_XP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UTextBlock* LabelCurrentLevel;
    class UProgressBar* LevelBar;
    class UTextBlock* TextLevel;
    class UPlayerStatsComponent* PlayerStats;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_HUD_XP(int32 EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1);
};

#endif
