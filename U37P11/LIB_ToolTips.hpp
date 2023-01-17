#ifndef UE4SS_SDK_LIB_ToolTips_HPP
#define UE4SS_SDK_LIB_ToolTips_HPP

class ULIB_ToolTips_C : public UBlueprintFunctionLibrary
{

    void CreateToolTip(class UWidget* ToolTipTarget, TSubclassOf<class UUserWidget> ToolTipClass, FVector2D Offset, class UObject* __WorldContext, class UUserWidget*& OutToolTip);
    void CreateBiomeToolTip(class UWidget* Target, FVector2D Position, FVector2D Alignment, class UResourceData* ResourceA, class UResourceData* ResourceB, class UObject* __WorldContext, class UBiome_ToolTip_C*& ToolTipWidget);
    void CreateBasicToolTip(class UWidget* Target, FText Text, FVector2D Position, FVector2D Alignment, class UObject* __WorldContext, class UBasic_ToolTip_C*& ToolTipWidget);
};

#endif
