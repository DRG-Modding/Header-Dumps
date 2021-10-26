// WidgetBlueprintGeneratedClass OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C
// Size: 0x248 (Inherited: 0x238)
struct UOnScreenIndicator_MiniMule_Build_C : UFSDInWorldWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* Img_Icon; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_OnScreenIndicator_MiniMule_Build(int32_t EntryPoint);
};

