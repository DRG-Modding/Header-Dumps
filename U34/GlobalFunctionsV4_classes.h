// BlueprintGeneratedClass GlobalFunctionsV4.GlobalFunctionsV4_C
// Size: 0x28 (Inherited: 0x28)
struct UGlobalFunctionsV4_C : UBlueprintFunctionLibrary {

	void On Spacerig(struct UObject* __WorldContext, bool On Spacerig); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.On Spacerig
	void Get Common HUD(struct UObject* __WorldContext, struct UCommonHUD_C* Widget); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.Get Common HUD
	void LoadSaveData(struct USaveGame* Save Class, struct FString Save File Path, struct UObject* __WorldContext, struct USaveGame* Save Game); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.LoadSaveData
	void GetBiomeName(bool Return Raw Name, struct UObject* __WorldContext, struct FString Biome); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.GetBiomeName
	void GetRandomPointOnMesh(struct AActor* Actor, struct TArray<struct FVector> Verts, struct TArray<int32_t> Tris, struct UObject* __WorldContext, struct FVector Point); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.GetRandomPointOnMesh
	void GetRandomTriangleAxisPoint(float A, float B, float C, float P, float Q, struct UObject* __WorldContext, float X); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.GetRandomTriangleAxisPoint
	void GetRandomPointInTriangle(struct FVector A, struct FVector B, struct FVector C, struct UObject* __WorldContext, struct FVector Point); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.GetRandomPointInTriangle
	void GetTransformWithRandomZRotation(struct FVector Location, struct UObject* __WorldContext, struct FTransform Transform); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.GetTransformWithRandomZRotation
	void GetString(struct UTextBlock* TextUI, struct UObject* __WorldContext, struct FString String); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.GetString
	void Get Uniform Random Scale Axis(float Min, float Max, struct UObject* __WorldContext, float Value); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.Get Uniform Random Scale Axis
	void TextToInt(struct UEditableTextBox* TextBox, struct UObject* __WorldContext, int32_t Int Value); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.TextToInt
	void TextToFloat(struct UEditableTextBox* TextBox, struct UObject* __WorldContext, float Float Value); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.TextToFloat
	void TextBoxTimeToSeconds(struct UEditableTextBox* Mins, struct UEditableTextBox* Secs, struct UObject* __WorldContext, float Seconds); // Function GlobalFunctionsV4.GlobalFunctionsV4_C.TextBoxTimeToSeconds
};

