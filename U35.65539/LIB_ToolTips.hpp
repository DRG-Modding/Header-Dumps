#ifndef UE4SS_SDK_LIB_ToolTips_HPP
#define UE4SS_SDK_LIB_ToolTips_HPP

class ULIB_ToolTips_C : UBlueprintFunctionLibrary
{

    void CreateToolTip(UWidget* ToolTipTarget, TSubclassOf<UUserWidget> ToolTipClass, FVector2D Offset, UObject* __WorldContext, UUserWidget*& OutToolTip, UUserWidget* ToolTip, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUserWidget* CallFunc_Create_ReturnValue);
    void CreateBiomeToolTip(UWidget* Target, FVector2D Position, FVector2D Alignment, UResourceData* ResourceA, UResourceData* ResourceB, UObject* __WorldContext, UBiome_ToolTip_C*& ToolTipWidget, UBiome_ToolTip_C* Widget, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBiome_ToolTip_C* CallFunc_Create_ReturnValue);
    void CreateBasicToolTip(UWidget* Target, FText Text, FVector2D Position, FVector2D Alignment, UObject* __WorldContext, UBasic_ToolTip_C*& ToolTipWidget, UBasic_ToolTip_C* Widget, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBasic_ToolTip_C* CallFunc_Create_ReturnValue, FText K2Node_Select_Default);
}

#endif
