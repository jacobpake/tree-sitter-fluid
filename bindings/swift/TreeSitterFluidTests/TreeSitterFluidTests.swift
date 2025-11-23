import XCTest
import SwiftTreeSitter
import TreeSitterFluid

final class TreeSitterFluidTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_fluid())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Fluid grammar")
    }
}
