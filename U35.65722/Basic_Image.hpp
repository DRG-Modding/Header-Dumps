#ifndef UE4SS_SDK_Basic_Image_HPP
#define UE4SS_SDK_Basic_Image_HPP

class UBasic_Image_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UImage* ImageComponent;
    FSlateBrush Brush;
    TEnumAsByte<ENUM_MenuColors::Type> Tint;
    float TintOpacity;
    TMap<FName, float> Scalars;
    TMap<class FName, class FLinearColor> Vectors;
    TMap<class FName, class TSoftObjectPtr<UTexture>> Textures;
    TMap<class FName, class FMenuColorAndOpacity> MenuColors;
    FText BasicToolTipText;
    FVector2D BasicToolTipPosition;
    FVector2D BasicToolTipAlignment;

    void SetBasicToolTip(FText BasicToolTipText, FVector2D BasicToolTipPosition, FVector2D BasicToolTipAlignment, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    class UWidget* GetBasicToolTip(class UBasic_ToolTip_C* BasicToolTip, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void SetDynamicMaterialValues(FName Name, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, FMenuColorAndOpacity CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<FName>& CallFunc_Map_Keys_Keys, FName CallFunc_Array_Get_Item, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSoftObjectPtr<UTexture> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TArray<FName>& CallFunc_Map_Keys_Keys_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, FName CallFunc_Array_Get_Item_1, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FLinearColor CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, TArray<FName>& CallFunc_Map_Keys_Keys_2, FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, float CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, TArray<FName>& CallFunc_Map_Keys_Keys_3, FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
    void SetDynamicMaterialTexture(FName ParameterName, class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetDynamicMaterialVector(FName ParameterName, FLinearColor Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetDynamicMaterialScalar(FName ParameterName, float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void FadeOut(float InDuration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void FadeIn(float InDuration, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void GetBrushSize(FVector2D& Brush Image Size);
    void SetBrushSize(FVector2D DesiredSize);
    class UMaterialInstanceDynamic* GetDynamicMaterial(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void SetTintAndOpacity(TEnumAsByte<ENUM_MenuColors::Type> InTint, float InTintOpacity, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void SetTintOpacity(float InOpacity);
    void SetTint(TEnumAsByte<ENUM_MenuColors::Type> InTint);
    void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
    void SetBrush(const FSlateBrush& InBrush);
    void GetBrush(FSlateBrush& Brush);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Basic_Image(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
