// WidgetBlueprintGeneratedClass UI_CoreInfuser_Reward_Background.UI_CoreInfuser_Reward_Background_C
// Size: 0x268 (Inherited: 0x230)
struct UUI_CoreInfuser_Reward_Background_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* AnimHover; 
	UPROPERTY(BlueprintReadWrite) UImage* BG; 
	UPROPERTY(BlueprintReadWrite) USizeBox* IconSizer; 
	UPROPERTY(BlueprintReadWrite) UImage* Overlay; 
	UPROPERTY(BlueprintReadWrite) bool Angled; 
	UPROPERTY(BlueprintReadWrite) bool IsHovering; 
	UPROPERTY(BlueprintReadWrite) float Size; 
	UPROPERTY(BlueprintReadWrite) USchematicCategory* Category; 

	UFUNCTION(BlueprintCallable) void SetCategory(USchematicCategory* InSchematicCategory);
	UFUNCTION(BlueprintCallable) void SetSize(float InSize);
	UFUNCTION(BlueprintCallable) void SetHovered(bool InHovering);
	UFUNCTION(BlueprintCallable) void SetAngled(bool Angled);
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_CoreInfuser_Reward_Background(int32_t EntryPoint);
};

