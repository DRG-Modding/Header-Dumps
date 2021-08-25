// BlueprintGeneratedClass GlobalFunctionsV3.GlobalFunctionsV3_C
// Size: 0x28 (Inherited: 0x28)
struct UGlobalFunctionsV3_C : UBlueprintFunctionLibrary {

	void LoadSaveData(struct USaveGame* Save Class, struct FString Save File Path, struct UObject* __WorldContext, struct USaveGame* Save Game); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.LoadSaveData
	void GetBiomeName(bool Return Raw Name, struct UObject* __WorldContext, struct FString Biome); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.GetBiomeName
	void GetRandomPointOnMesh(struct AActor* Actor, struct TArray<struct FVector> Verts, struct TArray<int32_t> Tris, struct UObject* __WorldContext, struct FVector Point); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.GetRandomPointOnMesh
	void GetRandomTriangleAxisPoint(float A, float B, float C, float P, float Q, struct UObject* __WorldContext, float X); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.GetRandomTriangleAxisPoint
	void GetRandomPointInTriangle(struct FVector A, struct FVector B, struct FVector C, struct UObject* __WorldContext, struct FVector Point); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.GetRandomPointInTriangle
	void GetTransformWithRandomZRotation(struct FVector Location, struct UObject* __WorldContext, struct FTransform Transform); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.GetTransformWithRandomZRotation
	void GetString(struct UTextBlock* TextUI, struct UObject* __WorldContext, struct FString String); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.GetString
	void Get Uniform Random Scale Axis(float Min, float Max, struct UObject* __WorldContext, float Value); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.Get Uniform Random Scale Axis
	void TextToInt(struct UEditableTextBox* TextBox, struct UObject* __WorldContext, int32_t Int Value); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.TextToInt
	void TextToFloat(struct UEditableTextBox* TextBox, struct UObject* __WorldContext, float Float Value); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.TextToFloat
	void TextBoxTimeToSeconds(struct UEditableTextBox* Mins, struct UEditableTextBox* Secs, struct UObject* __WorldContext, float Seconds); // Function GlobalFunctionsV3.GlobalFunctionsV3_C.TextBoxTimeToSeconds
};

