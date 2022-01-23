#ifndef UE4SS_SDK_UI_ClassInfo_CharacterIcon_HPP
#define UE4SS_SDK_UI_ClassInfo_CharacterIcon_HPP

class UUI_ClassInfo_CharacterIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BorderSelectionBorder;
    class UProgressBar* CharacterProgress;
    class USizeBox* CharacterProgressSize;
    class UTextBlock* ClassLevel;
    class UTextBlock* ClassName;
    class UImage* IconImage;
    bool Selected;
    bool Hovering;
    class UUI_ClassInfo_CharacterSelector_C* Selector;
    float ScaleNormal;
    float ScaleHover;
    TSubclassOf<class APlayerCharacter> playerClass;
    float TargetScale;
    float CurrentScale;
    FLinearColor BorderColor;

    void GetBorderAlpha(float& alpha);
    void SetBorderAlpha(float alpha, FLinearColor K2Node_MakeStruct_LinearColor);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventbool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, FEventReply K2Node_MakeStruct_EventReply, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void SetScale(float Scale, bool Immediatly);
    void OnClassSelected(TSubclassOf<class APlayerCharacter> playerClass);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Init(TSubclassOf<class APlayerCharacter> playerClass, class UUI_ClassInfo_CharacterSelector_C* Selector);
    void Deselect();
    void Select(bool FirstTime);
    void Construct();
    void ExecuteUbergraph_UI_ClassInfo_CharacterIcon(int32 EntryPoint, float Temp_float_Variable, FGeometry K2Node_Event_MyGeometry_1, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, float K2Node_CustomEvent_Scale, bool K2Node_CustomEvent_Immediatly, float CallFunc_SelectFloat_ReturnValue, float Temp_float_Variable_1, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_playerClass_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_playerClass, class UUI_ClassInfo_CharacterSelector_C* K2Node_CustomEvent_Selector, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, FText CallFunc_GetHeroName_ReturnValue, int32 CallFunc_GetHeroLevel_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FLinearColor Temp_struct_Variable, class UTexture2D* CallFunc_GetHeroImage_ReturnValue, FLinearColor Temp_struct_Variable_1, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, float CallFunc_GetHeroProgress_ReturnValue, bool Temp_bool_Variable_1, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_MoveTowards_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_FirstTime, FLinearColor K2Node_Select_Default, float CallFunc_GetBorderAlpha_Alpha, float CallFunc_SelectFloat_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MoveTowards_ReturnValue_1, FExecuteUbergraph_UI_ClassInfo_CharacterIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
};

#endif
