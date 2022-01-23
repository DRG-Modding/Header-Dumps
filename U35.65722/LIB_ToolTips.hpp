#ifndef UE4SS_SDK_LIB_ToolTips_HPP
#define UE4SS_SDK_LIB_ToolTips_HPP

class ULIB_ToolTips_C : public UBlueprintFunctionLibrary
{

    void CreateToolTip(class UWidget* ToolTipTarget, TSubclassOf<class UUserWidget> ToolTipClass, FVector2D Offset, class UObject* __WorldContext, class UUserWidget*& OutToolTip, class UUserWidget* ToolTip, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue);
    void CreateBiomeToolTip(class UWidget* Target, FVector2D Position, FVector2D Alignment, class UResourceData* ResourceA, class UResourceData* ResourceB, class UObject* __WorldContext, class UBiome_ToolTip_C*& ToolTipWidget, class UBiome_ToolTip_C* Widget, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBiome_ToolTip_C* CallFunc_Create_ReturnValue);
    void CreateBasicToolTip(class UWidget* Target, FText Text, FVector2D Position, FVector2D Alignment, class UObject* __WorldContext, class UBasic_ToolTip_C*& ToolTipWidget, class UBasic_ToolTip_C* Widget, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBasic_ToolTip_C* CallFunc_Create_ReturnValue, FText K2Node_Select_Default);
};

#endif
