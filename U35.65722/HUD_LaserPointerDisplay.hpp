#ifndef UE4SS_SDK_HUD_LaserPointerDisplay_HPP
#define UE4SS_SDK_HUD_LaserPointerDisplay_HPP

class UHUD_LaserPointerDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIconIn;
    class UWidgetAnimation* Intro;
    class UTextBlock* Description;
    class UTextBlock* DistLabel;
    class UHUD_LaserPointerScanProgress_C* HUD_LaserPointerScanProgress;
    class UTextBlock* ItemLabel;
    class UUI_AdvancedLabel_C* LBL_LeftMouse;
    class UUI_AdvancedLabel_C* LBL_RightMouse;
    class UHorizontalBox* ResourceIconHolder;
    class UImage* ResourceIconL;
    class UImage* ResourceIconR;
    class UTextBlock* TextBlock_Unknown;
    class UWidgetSwitcher* WidgetSwitcher_Scanbox;
    class APlayerCharacter* Character;
    FHitResult LastHit;
    bool IsNew;
    float ScanTimeLeft;
    float ScanTotalTime;
    FHUD_LaserPointerDisplay_CScanComplete ScanComplete;
    void ScanComplete();
    bool IsScanVisible;

    void UpdateCommands(bool HasMissileUpgrade, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class ABosco> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsUpgradeEquipped_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void Construct();
    void OnEquipped();
    void Update Display(FHitResult Hit, float Distance, FText Name, FText Description, class UTexture2D* Icon);
    void Point Of Interest(class UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void OnBoscoChanged(class ABosco* Bosco);
    void StartScan();
    void StopScan();
    void OnUnequipped();
    void ExecuteUbergraph_HUD_LaserPointerDisplay(int32 EntryPoint, FExecuteUbergraph_HUD_LaserPointerDisplayK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FHitResult K2Node_CustomEvent_Hit, float K2Node_CustomEvent_Distance, FText K2Node_CustomEvent_Name, FText K2Node_CustomEvent_Description, class UTexture2D* K2Node_CustomEvent_Icon, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, class UTexture2D* K2Node_CustomEvent_Texture, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class ABosco* K2Node_CustomEvent_Bosco, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default);
    void ScanComplete__DelegateSignature();
};

#endif
