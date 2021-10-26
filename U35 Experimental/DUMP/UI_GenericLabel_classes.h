// WidgetBlueprintGeneratedClass UI_GenericLabel.UI_GenericLabel_C
// Size: 0x2d1 (Inherited: 0x230)
struct UUI_GenericLabel_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UFSDLabelWidget* Label; 
	UPROPERTY(BlueprintReadWrite) FText Text; 
	UPROPERTY(BlueprintReadWrite) bool ToUpper; 
	UPROPERTY(BlueprintReadWrite) FSlateFontInfo Font; 
	UPROPERTY(BlueprintReadWrite) enum class ENUM_MenuColors TextColor; 
	UPROPERTY(BlueprintReadWrite) enum class ETextJustify Justification; 
	UPROPERTY(BlueprintReadWrite) float MinDesiredWidth; 
	UPROPERTY(BlueprintReadWrite) FMargin TextMargin; 
	UPROPERTY(BlueprintReadWrite) bool AutoTextWrap; 
	UPROPERTY(BlueprintReadWrite) float WrapTextAt; 
	UPROPERTY(BlueprintReadWrite) enum class ETextWrappingPolicy WrappingPolicy; 

	UFUNCTION(BlueprintCallable) void GetText(FText Text);
	UFUNCTION(BlueprintCallable) void SetWrappingPolicy(enum class ETextWrappingPolicy WrappingPolicy);
	UFUNCTION(BlueprintCallable) void SetWrapTextAt(float WrapTextAt);
	UFUNCTION(BlueprintCallable) void SetAutoWrapText(bool AutoTextWrap);
	UFUNCTION(BlueprintCallable) void SetFontSize(int32_t inFontSize);
	UFUNCTION(BlueprintCallable) void SetMinDesiredWidth(float MinDesiredWidth);
	UFUNCTION(BlueprintCallable) void SetJustification(enum class ETextJustify Justification);
	UFUNCTION(BlueprintCallable) void SetTextColor(enum class ENUM_MenuColors TextColor);
	UFUNCTION(BlueprintCallable) void SetText(FText Text);
	UFUNCTION(BlueprintCallable) void SetMargin(FMargin New Margin);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_GenericLabel(int32_t EntryPoint);
};

